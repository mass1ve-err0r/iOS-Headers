//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface AppReceiptRefreshOperationOptions : NSObject <NSCopying>
{
    long long _authenticationPromptStyle;
    NSString *_bundleIdentifier;
    unsigned long long _flags;
    _Bool _needsAuthentication;
    _Bool _performSinfMirartionCheckBeforeFailing;
    NSNumber *_targetAccount;
}

@property(copy, nonatomic) NSNumber *targetAccount; // @synthesize targetAccount=_targetAccount;
@property(nonatomic) unsigned long long receiptFlags; // @synthesize receiptFlags=_flags;
@property(nonatomic) _Bool performSinfMirartionCheckBeforeFailing; // @synthesize performSinfMirartionCheckBeforeFailing=_performSinfMirartionCheckBeforeFailing;
@property(nonatomic) _Bool needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) long long authenticationPromptStyle; // @synthesize authenticationPromptStyle=_authenticationPromptStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *URLBagKey;
- (id)initWithReceiptFlags:(unsigned long long)arg1;

@end

