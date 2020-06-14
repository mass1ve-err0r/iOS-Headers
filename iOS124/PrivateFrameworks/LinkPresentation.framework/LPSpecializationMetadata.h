//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSCopying-Protocol.h>
#import <LinkPresentation/NSSecureCoding-Protocol.h>

@interface LPSpecializationMetadata : NSObject <NSSecureCoding, NSCopying>
{
}

+ (_Bool)supportsSecureCoding;
- (void)populateLinkMetadataForBackwardCompatibility:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

