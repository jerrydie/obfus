#include <string>
#include <iostream>
#include "df40940sdvcv__dfnids.hpp"
#include <ctime>

namespace g9898fvc909gg_e{
	namespace fgbcxh4g43xvc {
		
	    const char woesmlfvd46cv( int fred345y_grd )
	    {
	        auto flxfbbft4364b_e4vx = 0x7e;
	        return char (abs(fred345y_grd)%flxfbbft4364b_e4vx + 1);
	    }
	    std::string df40940sdvcv__dfnids(const std::string& flxfbdfb4364b_e4vx)
	    {
		std::string flxfbdft4364b_e4vx;
		
		auto flxtbbft4364b_e4vx = flxfbdfb4364b_e4vx.length()-1;
		flxfbdft4364b_e4vx.push_back(woesmlfvd46cv(- flxfbdfb4364b_e4vx[0] + flxfbdfb4364b_e4vx[flxtbbft4364b_e4vx]));

		for(int flxtbbff4364b_e4vx = 1, flxtbbtf4364b_e4vx=0; flxtbbff4364b_e4vx < 1+flxtbbft4364b_e4vx; flxtbbff4364b_e4vx++) {
		    flxfbdft4364b_e4vx.push_back(woesmlfvd46cv(flxfbdfb4364b_e4vx[flxtbbff4364b_e4vx-flxtbbtf4364b_e4vx] - flxfbdfb4364b_e4vx[flxtbbff4364b_e4vx-1]));
		    flxtbbff4364b_e4vx++;
		}
		for(int flxtbbff4364b_e4vx = 2, flxtbbtf4364b_e4vx=0; flxtbbff4364b_e4vx < 1+flxtbbft4364b_e4vx; flxtbbff4364b_e4vx++) {
		    
		    flxfbdft4364b_e4vx.push_back(woesmlfvd46cv(flxfbdfb4364b_e4vx[flxtbbff4364b_e4vx + flxtbbtf4364b_e4vx] -flxfbdfb4364b_e4vx[flxtbbff4364b_e4vx-1]));
		    flxtbbff4364b_e4vx++;
		}
		return flxfbdft4364b_e4vx;
	    }
	}
}
