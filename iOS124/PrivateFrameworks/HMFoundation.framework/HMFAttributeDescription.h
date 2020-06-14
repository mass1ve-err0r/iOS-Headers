//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class NSArray, NSFormatter, NSString;
@protocol NSObject;

@interface HMFAttributeDescription : NSObject <HMFObject>
{
    NSString *_name;
    id <NSObject> _value;
    unsigned long long _options;
    NSFormatter *_formatter;
}

+ (id)shortDescription;
@property(readonly, copy, nonatomic) NSFormatter *formatter; // @synthesize formatter=_formatter;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <NSObject> value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *shortDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithName:(id)arg1 value:(id)arg2 options:(unsigned long long)arg3 formatter:(id)arg4;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

