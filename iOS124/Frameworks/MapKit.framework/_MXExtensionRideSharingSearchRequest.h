//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSSecureCoding-Protocol.h>

@class MKMapItem;

@interface _MXExtensionRideSharingSearchRequest : NSObject <NSSecureCoding>
{
    MKMapItem *_origin;
    MKMapItem *_destination;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) MKMapItem *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) MKMapItem *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

