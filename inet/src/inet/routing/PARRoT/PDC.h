#pragma once
#include <math.h>

namespace inet {

class PDC {
	public:
		PDC() {
		}
		~PDC() {
		}

		// Setter
		void lastSeen(double t) {
			_lastSeen = t;
		}
		void coord(Coord coord) {
			_coord = coord;
		}
		void coord(double x, double y, double z = 0.0) {
			this->coord(Coord(x, y, z));
		}
		void velo(double vx, double vy, double vz) {
			this->velo(Coord(vx, vy, vz));
		}
		void velo(Coord v) {
			_velo = v;
		}
		void Gamma_Mob(double v) {
			_Gamma_Mob = v;
		}
		void Gamma_Pos(double v) {
			_Gamma_Pos = v;
		}
		// Getter
		double lastSeen() {
			return _lastSeen;
		}
		Coord coord() {
			return _coord;
		}
		Coord velo() {
			return _velo;
		}
		double Gamma_Mob() {
			return _Gamma_Mob;
		}
		double Gamma_Pos() {
			return _Gamma_Pos;
		}

	protected:
		double _lastSeen;
		Coord _coord;
		Coord _velo;
		double _Gamma_Mob = 0.0;
		double _Gamma_Pos = 0.0;
}
;

}	// Namespace inet
