//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FriendKit/NSObject-Protocol.h>

@class FKFriendGroup, FKPerson, NSArray;

@protocol FKFriendGroupDelegate <NSObject>
- (void)friendGroup:(FKFriendGroup *)arg1 didMoveFriends:(NSArray *)arg2;
- (void)friendGroup:(FKFriendGroup *)arg1 didRemoveFriend:(FKPerson *)arg2 atPosition:(unsigned long long)arg3;
- (void)friendGroup:(FKFriendGroup *)arg1 didSetFriend:(FKPerson *)arg2 atPosition:(unsigned long long)arg3;
@end

