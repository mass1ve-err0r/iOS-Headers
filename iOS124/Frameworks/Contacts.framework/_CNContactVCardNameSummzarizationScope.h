//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface _CNContactVCardNameSummzarizationScope : NSObject
{
    CNContact *_contact;
    NSString *_fullName;
}

@property(readonly, copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)initWithContact:(id)arg1 fullName:(id)arg2;

@end

