//
//  MapPin.h
//  MapViewApplication
//
//  Created by Duminica Octavian on 23/03/2018.
//  Copyright © 2018 Duminica Octavian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface MapPin : NSObject <MKAnnotation> {
    
    CLLocationCoordinate2D coordinate;
    
}

@property (nonatomic, assign) CLLocationCoordinate2D coordinate;

@end
