//
//  ViewController.h
//  MapViewApplication
//
//  Created by Duminica Octavian on 23/03/2018.
//  Copyright © 2018 Duminica Octavian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController <MKMapViewDelegate, CLLocationManagerDelegate> {
    
    CLLocationManager *locationManager; // for user location
    
}

@property (weak, nonatomic) IBOutlet MKMapView *mapKit;
- (IBAction)directions:(id)sender;
- (IBAction)standard:(id)sender;
- (IBAction)satellite:(id)sender;
- (IBAction)hybrid:(id)sender;
- (IBAction)locate:(id)sender;

@end

