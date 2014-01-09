//
//  LocationDetailsViewController.h
//  MyLocations
//
//  Created by John Hopkins on 06/01/2014.
//  Copyright (c) 2014 cocoacoda. All rights reserved.
//

@interface LocationDetailsViewController : UITableViewController

@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
@property (nonatomic, strong) CLPlacemark *placemark;
@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;

@end
