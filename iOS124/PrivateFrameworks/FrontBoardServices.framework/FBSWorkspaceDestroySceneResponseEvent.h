//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceSceneUpdateResponseEvent.h>

@class FBSWorkspaceDestroySceneResponse;

@interface FBSWorkspaceDestroySceneResponseEvent : FBSWorkspaceSceneUpdateResponseEvent
{
}

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

// Remaining properties
@property(retain, nonatomic) FBSWorkspaceDestroySceneResponse *response; // @dynamic response;

@end

