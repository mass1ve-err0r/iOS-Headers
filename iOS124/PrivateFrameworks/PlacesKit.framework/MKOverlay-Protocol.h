//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlacesKit/MKAnnotation-Protocol.h>

@protocol MKOverlay <MKAnnotation>
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

@optional
- (_Bool)canReplaceMapContent;
- (_Bool)intersectsMapRect:(CDStruct_02837cd9)arg1;
@end

