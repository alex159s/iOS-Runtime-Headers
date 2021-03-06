/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsRouteRequest : GEODirectionsRequest {
    double _requestTime;
}

@property (nonatomic) double requestTime;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (id)init;
- (id)initWithFeedback:(id)arg1;
- (id)initWithQuickETARequest:(id)arg1 withFeedback:(id)arg2;
- (double)requestTime;
- (Class)responseClass;
- (void)setRequestTime:(double)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_commonSetup:(id)arg1;
- (id)initWithDirectionsRequest:(id)arg1 origin:(id)arg2 destination:(id)arg3 withFeedback:(id)arg4;

@end
