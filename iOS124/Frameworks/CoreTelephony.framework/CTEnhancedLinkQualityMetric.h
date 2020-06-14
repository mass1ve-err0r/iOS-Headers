//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSData;

@interface CTEnhancedLinkQualityMetric : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_enhancedLinkQuality;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *enhancedLinkQuality; // @synthesize enhancedLinkQuality=_enhancedLinkQuality;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithEnhancedLinkQuality:(id)arg1;

@end

