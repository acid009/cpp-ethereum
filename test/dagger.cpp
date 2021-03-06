/*
	This file is part of cpp-ethereum.

	cpp-ethereum is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	cpp-ethereum is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with cpp-ethereum.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @file dagger.cpp
 * @author Gav Wood <i@gavwood.com>
 * @date 2014
 * Dagger test functions.
 */

#include <chrono>
#include <libethcore/Log.h>
#include <libethereum/Dagger.h>
using namespace std;
using namespace std::chrono;
using namespace eth;

int daggerTest()
{
	cnote << "Testing Dagger...";
	// Test dagger
	{
		auto s = steady_clock::now();
		cout << hex << Dagger().eval((h256)(u256)1, (h256)(u256)0);
		cout << " " << dec << duration_cast<milliseconds>(steady_clock::now() - s).count() << " ms" << endl;
		cout << hex << Dagger().eval((h256)(u256)1, (h256)(u256)1);
		cout << " " << dec << duration_cast<milliseconds>(steady_clock::now() - s).count() << " ms" << endl;
	}
	{
		auto s = steady_clock::now();
		cout << hex << Dagger().eval((h256)(u256)1, (h256)(u256)0);
		cout << " " << dec << duration_cast<milliseconds>(steady_clock::now() - s).count() << " ms" << endl;
		cout << hex << Dagger().eval((h256)(u256)1, (h256)(u256)1);
		cout << " " << dec << duration_cast<milliseconds>(steady_clock::now() - s).count() << " ms" << endl;
	}
	return 0;
}

