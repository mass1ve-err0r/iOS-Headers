//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSURLQueryItem : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    NSString *_value;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)queryItemWithName:(id)arg1 value:(id)arg2;
@property(readonly) NSString *value; // @synthesize value=_value;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

