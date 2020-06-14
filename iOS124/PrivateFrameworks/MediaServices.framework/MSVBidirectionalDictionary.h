//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaServices/NSCopying-Protocol.h>
#import <MediaServices/NSMutableCopying-Protocol.h>
#import <MediaServices/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface MSVBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSMutableDictionary *_keyToObjectDictionary;
    NSMutableDictionary *_objectToKeyDictionary;
}

+ (_Bool)supportsSecureCoding;
+ (id)bidirectionalDictionary;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyForObject:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)allKeys;
- (id)init;

@end

