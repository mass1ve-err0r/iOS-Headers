//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAUITemplateRange : AceObject <SAAceSerializable>
{
}

+ (id)rangeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)range;
@property(nonatomic) long long location;
@property(nonatomic) long long length;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

