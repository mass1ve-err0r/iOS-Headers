//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKCustomFeatureAnnotation-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class NSString, VKCustomFeature;

@interface MKMapSnapshotFeatureAnnotation : NSObject <MKCustomFeatureAnnotation, NSSecureCoding>
{
    long long _representation;
    NSString *_title;
    VKCustomFeature *_customFeature;
    CDStruct_2c43369c _coordinate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) long long representation; // @synthesize representation=_representation;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showsBalloonCallout;
- (void)setShowsBalloonCallout:(_Bool)arg1;
- (id)feature;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 title:(id)arg2 representation:(long long)arg3;

// Remaining properties
@property(nonatomic) double course;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

