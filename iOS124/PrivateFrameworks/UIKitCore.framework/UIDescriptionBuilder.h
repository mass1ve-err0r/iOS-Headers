//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;

@interface UIDescriptionBuilder : NSObject
{
    NSString *_separator;
    NSObject *_object;
    NSMutableString *_descriptionString;
}

+ (id)lightDescriptionForObject:(id)arg1;
+ (id)descriptionForObject:(id)arg1 keys:(id)arg2;
+ (id)descriptionForObject:(id)arg1 namesAndObjects:(id)arg2;
+ (id)descriptionBuilderWithObject:(id)arg1;
@property(retain, nonatomic) NSMutableString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(nonatomic) NSObject *object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *separator; // @synthesize separator=_separator;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *string;
- (void)tryAppendKey:(id)arg1;
- (id)appendKeys:(id)arg1;
- (id)appendKey:(id)arg1;
- (id)appendNamesAndObjects:(id)arg1;
- (id)appendName:(id)arg1 selector:(SEL)arg2;
- (id)appendName:(id)arg1 pointerValue:(void *)arg2;
- (id)appendName:(id)arg1 doubleValue:(double)arg2;
- (id)appendName:(id)arg1 intValue:(int)arg2;
- (id)appendName:(id)arg1 unsignedInteger:(unsigned long long)arg2;
- (id)appendName:(id)arg1 integerValue:(long long)arg2;
- (id)appendName:(id)arg1 boolValue:(_Bool)arg2;
- (id)appendName:(id)arg1 object:(id)arg2 usingLightweightDescription:(_Bool)arg3;
- (id)appendName:(id)arg1 object:(id)arg2;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (id)initWithObject:(id)arg1;

@end

