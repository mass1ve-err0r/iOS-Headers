//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODIText : NSObject
{
}

+ (void)mapTextFromPoint:(id)arg1 toShape:(id)arg2 isCenteredHorizontally:(_Bool)arg3 isCenteredVertically:(_Bool)arg4 includeChildren:(_Bool)arg5 state:(id)arg6;
+ (void)mapTextFromPoint:(id)arg1 toShape:(id)arg2 isCentered:(_Bool)arg3 includeChildren:(_Bool)arg4 state:(id)arg5;
+ (void)addTextFromPoint:(id)arg1 level:(unsigned int)arg2 includeChildren:(_Bool)arg3 toShape:(id)arg4 baseListStyle:(id)arg5 state:(id)arg6;
+ (id)baseListStyleForPoint:(id)arg1 shape:(id)arg2 isCentered:(_Bool)arg3 state:(id)arg4;

@end

