//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAReminderListObject.h>

#import <SAObjects/SASyncWrap-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface SAReminderListObjectWrapper : SAReminderListObject <SASyncWrap>
{
}

+ (id)listObjectWrapperWithDictionary:(id)arg1 context:(id)arg2;
+ (id)listObjectWrapper;
@property(copy, nonatomic) NSNumber *generation;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSURL *identifier; // @dynamic identifier;
@property(readonly) Class superclass;

@end

