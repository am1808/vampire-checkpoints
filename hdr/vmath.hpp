///
/// @file
/// @brief Contains the vmath header namespace for sundry math utilities in vampire. 
///
/// @section License
/// Use of this code, either in source or compiled form, is subject to license from the authors.
/// Copyright \htmlonly &copy \endhtmlonly Richard Evans, 2009-2010. All Rights Reserved.
///
/// @section info File Information
/// @author  Richard Evans, rfle500@york.ac.uk
/// @version 1.0
/// @date    04/03/2010
/// @internal
///	Created:		04/03/2010
///	Revision:	  ---
///=====================================================================================
///

/// @namespace ns
/// @brief vmath namespace containing sundry math functions for vampire.
/// 
/// @internal
///=====================================================================================
///
namespace vmath{

	/// @brief Function to determine if point is within a polygon.
	///
	/// @section License
	/// Use of this code, either in source or compiled form, is subject to license from the authors.
	/// Copyright \htmlonly &copy \endhtmlonly Richard Evans, 2009-2010. All Rights Reserved.
	///
	/// @section Information
	/// @author  Richard Evans, rfle500@york.ac.uk
	/// @version 1.0
	/// @date    04/03/2010
	///
	/// @param[in] x x coordinate of point to be tested
	/// @param[in] y y coordinate of point to be tested
	/// @param[in] *polyX array of x coordinate points for the polygon
	/// @param[in] *polyY array of y coordinate points for the polygon
	/// @param[in] nsides number of sides of the polygon
	/// @return variable returned from the function
	///
	/// @internal
	///	Created:		04/03/2010
	///	Revision:	  ---
	///=====================================================================================
	///
	extern bool point_in_polygon(double, double, double*, double*, int);

}