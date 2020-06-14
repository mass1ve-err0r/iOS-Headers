//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNHandle-Protocol.h>

@class NSString;

@interface CNHandle : NSObject <CNHandle>
{
    NSString *_stringValue;
    unsigned long long _type;
    NSString *_customIdentifier;
}

+ (id)keyTypeMapping;
+ (unsigned long long)handleTypeForPropertyKey:(id)arg1;
+ (id)tuHandleTypeMap;
+ (long long)tuHandleTypeFromType:(unsigned long long)arg1;
+ (id)tuHandleForHandle:(id)arg1;
+ (id)inPersonHandleTypeMap;
+ (long long)inPersonHandleTypeForType:(unsigned long long)arg1;
+ (id)inPersonHandleForHandle:(id)arg1;
+ (id)geminiHandleTypeMap;
+ (long long)geminiHandleTypeForType:(unsigned long long)arg1;
+ (id)geminiHandleForHandle:(id)arg1;
@property(readonly, copy, nonatomic) NSString *customIdentifier; // @synthesize customIdentifier=_customIdentifier;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
- (id)initWithStringValue:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithStringValue:(id)arg1 customIdentifier:(id)arg2 type:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

