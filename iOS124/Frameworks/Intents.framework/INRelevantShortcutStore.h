//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableIndex;

@interface INRelevantShortcutStore : NSObject
{
    CSSearchableIndex *_index;
}

+ (id)defaultStore;
@property(readonly, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)setRelevantShortcuts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSearchableIndex:(id)arg1;

@end

