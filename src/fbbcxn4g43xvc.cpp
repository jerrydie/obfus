#include <string>
#include <iostream>
#include <iterator>
#include <algorithm>

#define sjdnc_32ydscllx832 1

namespace fdjvnseol2945jivd932::djvnldf_349sidckn { template<std::size_t skdhc_83ydx>
struct dijl902839kx_832e { short sjsch_iwrnkz234[skdhc_83ydx];
constexpr dijl902839kx_832e():sjsch_iwrnkz234{sjdnc_32ydscllx832 - 1} { } 
std::string dkjxvn93r03_38e() const { std::string rvdlsvnk38usf_93; rvdlsvnk38usf_93.reserve(skdhc_83ydx + sjdnc_32ydscllx832);
std::transform(sjsch_iwrnkz234, sjsch_iwrnkz234 + skdhc_83ydx - sjdnc_32ydscllx832, std::back_inserter(rvdlsvnk38usf_93), [](auto dlkivsd932809c) {
return dlkivsd932809c - sjdnc_32ydscllx832; }); return rvdlsvnk38usf_93; } }; //функция шифрования
template<typename jdn8ecmzcki, std::size_t ldnvilo03czn> constexpr std::size_t lsicnowi28kc_skn2(const jdn8ecmzcki(&)[ldnvilo03czn]) {
return ldnvilo03czn; } //функция дешифрования 
template<std::size_t skdhc_83ydx>
constexpr auto dsmlcsi823_sdhn3(const char asidhow32ujc_3hn[skdhc_83ydx]) { dijl902839kx_832e<skdhc_83ydx> sncelod9238_h32;
for(std::size_t skcdnn1_23ec = 0; skcdnn1_23ec < skdhc_83ydx - sjdnc_32ydscllx832; skcdnn1_23ec++)
sncelod9238_h32.sjsch_iwrnkz234[skcdnn1_23ec] = asidhow32ujc_3hn[skcdnn1_23ec] + sjdnc_32ydscllx832; sncelod9238_h32.sjsch_iwrnkz234[skdhc_83ydx - sjdnc_32ydscllx832] = sjdnc_32ydscllx832 - 1; return sncelod9238_h32;} }
