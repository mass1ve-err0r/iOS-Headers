//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPStorageIterationEvent : NSObject
{
    NSString *_identifier;
    struct _NSRange _range;
    NSObject *_object;
    int _type;
    TSWPStorage *_storage;
}

+ (id)characterEventWithRange:(struct _NSRange)arg1;
+ (id)eventWithType:(int)arg1 providerIdentifier:(id)arg2 range:(struct _NSRange)arg3 object:(id)arg4;
@property(nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) NSObject *object; // @synthesize object=_object;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isRangeEnd;
- (id)initWithCharacterRange:(struct _NSRange)arg1;
- (id)initWithType:(int)arg1 providerIdentifier:(id)arg2 range:(struct _NSRange)arg3 object:(id)arg4;

@end

