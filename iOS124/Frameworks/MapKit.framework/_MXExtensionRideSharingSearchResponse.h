//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface _MXExtensionRideSharingSearchResponse : NSObject <NSSecureCoding>
{
    NSArray *_rides;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *rides; // @synthesize rides=_rides;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

