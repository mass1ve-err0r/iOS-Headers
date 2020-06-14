//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;

@interface PUTilingDataSource : NSObject
{
    NSString *_identifier;
    NSHashTable *__changeObservers;
}

@property(readonly, nonatomic) NSHashTable *_changeObservers; // @synthesize _changeObservers=__changeObservers;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)enumerateIndexPathsStartingAtIndexPath:(id)arg1 reverseDirection:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)init;

@end

