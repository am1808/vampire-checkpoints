//====================================================================================================
//
//       				                    		Demag.h
//
//  			 					Namespace header file for demag routines
//	 
//											Version 1.0 R Evans 18/09/2009
//
//==================================================================================================== 
#include <vector>

namespace demag{

	extern int num_demag_cells;
	extern int demag_resolution;
	extern int update_rate;
	extern int update_counter;

	extern const double prefactor;

	extern std::vector<int> atom_demag_array;

	extern std::vector<double> demag_spin_x_array;
	extern std::vector<double> demag_spin_y_array;
	extern std::vector<double> demag_spin_z_array;

	extern std::vector<double> demag_coord_x_array;
	extern std::vector<double> demag_coord_y_array;
	extern std::vector<double> demag_coord_z_array;

	extern std::vector<double> demag_field_x_array;
	extern std::vector<double> demag_field_y_array;
	extern std::vector<double> demag_field_z_array;

	extern double** rij_matrix;

	extern bool demag_set;

}
