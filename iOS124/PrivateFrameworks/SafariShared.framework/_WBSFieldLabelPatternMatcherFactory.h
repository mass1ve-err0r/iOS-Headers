//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _WBSFieldLabelPatternMatcherFactory : NSObject
{
    NSMutableDictionary *_trie;
}

+ (struct __WBSFieldLabelPatternMatcherArray *)createFieldLabelPatternMatcherArrayFromWordArrays:(id)arg1 allowingEndOfWordMatches:(_Bool)arg2;
- (void).cxx_destruct;
- (void)_addWord:(id)arg1 allowingEndOfWordMatch:(_Bool)arg2;
- (id)init;

@end

