//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BLAssertionHandler : NSObject
{
}

+ (id)performBlockIgnoringAssertions:(CDUnknownBlockType)arg1;
+ (void)handleFailureWithLocation:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
+ (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4;

@end

