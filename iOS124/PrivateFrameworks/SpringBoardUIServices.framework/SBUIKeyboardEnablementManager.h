//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface SBUIKeyboardEnablementManager : NSObject
{
    NSHashTable *_disabledContexts;
    _Bool _disabled;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)description;
- (void)enableAutomaticAppearanceForContext:(id)arg1;
- (void)disableAutomaticAppearanceForContext:(id)arg1;
- (id)init;

@end

