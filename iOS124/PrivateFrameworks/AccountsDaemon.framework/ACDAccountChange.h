//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount;

@interface ACDAccountChange : NSObject
{
    int _changeType;
    ACAccount *_account;
    ACAccount *_oldAccount;
}

+ (id)changeWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;
@property(retain, nonatomic) ACAccount *oldAccount; // @synthesize oldAccount=_oldAccount;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) int changeType; // @synthesize changeType=_changeType;
- (void).cxx_destruct;
- (id)initWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;

@end

