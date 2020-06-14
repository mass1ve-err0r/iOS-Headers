//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPShuffleController;

@protocol MPShuffleControllerDataSource <NSObject>
- (unsigned long long)shuffleController:(MPShuffleController *)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned long long)arg3;
- (id)shuffleController:(MPShuffleController *)arg1 identifierForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)itemCountForShuffleController:(MPShuffleController *)arg1;
@end

