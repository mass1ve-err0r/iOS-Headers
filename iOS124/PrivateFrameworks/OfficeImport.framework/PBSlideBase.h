//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBSlideBase : NSObject
{
}

+ (id)nonPlaceholderDrawablesAmongDrawables:(id)arg1;
+ (void)mapSlideNumberPlaceholder:(id)arg1 tgtSlideBase:(id)arg2 state:(id)arg3;
+ (_Bool)readColorScheme:(id)arg1 colorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4;
+ (void)readDrawingGroup:(id)arg1 slide:(id)arg2 state:(id)arg3;
+ (void)readComments:(id)arg1 slide:(id)arg2 state:(id)arg3;
+ (unsigned long long)authorIdForName:(id)arg1 state:(id)arg2;
+ (unsigned char)mapDirection:(id)arg1;
+ (id)newOptions:(long long)arg1 transType:(int)arg2;
+ (int)parseTransType:(int)arg1 direction:(long long)arg2;
+ (void)parseSlideShowInfo:(struct PptSSSlideInfoAtom *)arg1 slideBase:(id)arg2 state:(id)arg3;
+ (_Bool)slideFollowsMasterBackground:(id)arg1;

@end

