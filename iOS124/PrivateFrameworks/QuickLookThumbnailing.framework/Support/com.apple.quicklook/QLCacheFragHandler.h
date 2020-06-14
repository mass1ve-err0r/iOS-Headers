//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface QLCacheFragHandler : NSObject
{
    unsigned long long _totalLen;
    unsigned long long _holesLen;
    NSArray *_sizeRanks;
    NSMutableArray *_orderedByStart;
    NSString *_path;
    _Bool _isDirty;
    _Bool _needsCompact;
}

- (void).cxx_destruct;
- (id)orderedByStart;
- (void)assertSpaceIsRetainedAtPos:(unsigned long long)arg1 withLen:(unsigned long long)arg2;
- (_Bool)checkConsistency;
- (_Bool)checkHolesLenConsistency;
- (_Bool)save;
- (void)compact;
- (id)dataToSave;
- (_Bool)isDirty;
- (float)frag;
- (unsigned long long)totalLen;
- (void)truncateFromPosition:(unsigned long long)arg1;
- (void)truncateUselessSpaceAtEndOfFile;
- (id)lastHole;
- (_Bool)canFindHoleForLen:(unsigned long long)arg1;
- (void)releaseSpaceAtPos:(unsigned long long)arg1 withLen:(unsigned long long)arg2;
- (unsigned long long)allocateSpaceForLength:(unsigned long long)arg1 added:(_Bool *)arg2;
- (void)clear;
- (void)_insertHoleInRanks:(id)arg1;
- (void)_removeHoleFromRanks:(id)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFilePath:(id)arg1;
- (id)initWithHolePositions:(id)arg1 holeLengths:(id)arg2 totalLength:(long long)arg3 holesLength:(long long)arg4;

@end

