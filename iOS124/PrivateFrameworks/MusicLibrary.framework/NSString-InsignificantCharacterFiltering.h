//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (InsignificantCharacterFiltering)
- (id)MLSortStringWithPrefix;
- (id)MLSortString;
- (id)copyWithoutInsignificantCharacters;
- (id)copyWithoutInsignificantPrefixAndCharacters;
- (id)_copyWithoutInsignificantPrefix:(_Bool)arg1 andCharacters:(_Bool)arg2;
- (struct _NSRange)_rangeWithoutInsignificantPrefix:(_Bool)arg1 andCharacters:(_Bool)arg2;
@end

