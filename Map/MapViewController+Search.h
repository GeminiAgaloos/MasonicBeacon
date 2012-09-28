//
//  MapViewController+Search.h
//  Map
//
//  Created by Scott Sirowy on 10/14/11.
/*
 Copyright © 2012 Esri
 
 All rights reserved under the copyright laws of the United States
 and applicable international laws, treaties, and conventions.
 
 You may freely redistribute and use this sample code, with or
 without modification, provided you include the original copyright
 notice and use restrictions.
 
 See the use restrictions at http://help.arcgis.com/en/sdk/10.0/usageRestrictions.htm
 
 */
#import "MapViewController.h"

/*
 Category for all search related tasks on the map view.
 */

@interface MapViewController (Search) <UISearchBarDelegate, GeocodeServiceDelegate, LocationDelegate>

-(void)dropPinForSearchLocation:(Location *)location;
-(void)dropPinForSearchLocation:(Location *)location zoomToLocation:(BOOL)zoom;
-(void)dropPinForSearchLocation:(Location *)location zoomToLocation:(BOOL)zoom showCallout:(BOOL)showCallout;

-(void)setupSearchUx;
-(void)setSearchState:(MapSearchState)state withKeyboard:(BOOL)keyboard animated:(BOOL)animated;

-(void)mapListButtonPressed:(id)sender;

-(void)searchFinishedExecuting;

@end
