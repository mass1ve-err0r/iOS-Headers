//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CATLocalizationHelper : NSObject
{
    NSMutableDictionary *mStringByKeyByTableName;
    NSLock *mLock;
    NSBundle *_bundle;
}

+ (id)helperForBundle:(id)arg1;
@property(readonly, nonatomic) __weak NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (id)stringsForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)stringByKeyForTableName:(id)arg1;
- (id)initWithBundle:(id)arg1;

@end

