//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INIntentSlotDescriptionExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface INIntentSlotDescription : NSObject <INIntentSlotDescriptionExport, NSCopying>
{
    _Bool _isExtended;
    _Bool _isPrivate;
    NSString *_name;
    unsigned long long _tag;
    NSString *_facadePropertyName;
    NSString *_dataPropertyName;
    long long _valueType;
    long long _valueStyle;
    NSArray *_resolveSelectorStrings;
}

@property(readonly, copy, nonatomic) NSArray *resolveSelectorStrings; // @synthesize resolveSelectorStrings=_resolveSelectorStrings;
@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) _Bool isExtended; // @synthesize isExtended=_isExtended;
@property(readonly, nonatomic) long long valueStyle; // @synthesize valueStyle=_valueStyle;
@property(readonly, nonatomic) long long valueType; // @synthesize valueType=_valueType;
@property(readonly, copy, nonatomic) NSString *dataPropertyName; // @synthesize dataPropertyName=_dataPropertyName;
@property(readonly, copy, nonatomic) NSString *facadePropertyName; // @synthesize facadePropertyName=_facadePropertyName;
@property(readonly, nonatomic) unsigned long long tag; // @synthesize tag=_tag;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SEL deprecatedResolveSelector;
@property(readonly, nonatomic) SEL resolveSelector;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(long long)arg5 valueStyle:(long long)arg6 isExtended:(_Bool)arg7 isPrivate:(_Bool)arg8 resolveSelector:(SEL)arg9;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(long long)arg5 valueStyle:(long long)arg6 isExtended:(_Bool)arg7 isPrivate:(_Bool)arg8 resolveSelector:(SEL)arg9 deprecatedResolveSelector:(SEL)arg10;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 isExtended:(_Bool)arg5 isPrivate:(_Bool)arg6 valueType:(long long)arg7 valueStyle:(long long)arg8 resolveSelectors:(SEL)arg9;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(long long)arg5 valueStyle:(long long)arg6 isExtended:(_Bool)arg7 isPrivate:(_Bool)arg8 resolveSelectors:(SEL)arg9;
- (id)localizeValue:(id)arg1 forLanguage:(id)arg2;
- (void)setValue:(id)arg1 forSlotComposer:(id)arg2;
- (id)valueForSlotComposer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

