//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGContactsInterface : NSObject
{
}

+ (_Bool)handleExistsInContactStoreForHandle:(id)arg1 withHandleType:(id)arg2;
+ (void)clearCache;
+ (_Bool)enumerateContactsMatchingName:(id)arg1 withKeysToFetch:(id)arg2 usingContactStore:(id)arg3 error:(id *)arg4 usingBlock:(CDUnknownBlockType)arg5;
+ (id)unifiedMeContactWithKeysToFetch:(id)arg1 usingContactStore:(id)arg2 error:(id *)arg3;
+ (void)initialize;

@end

