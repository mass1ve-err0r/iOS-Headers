//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightServices/PRSTriggerTask-Protocol.h>

@interface PRSFTETask : NSObject <PRSTriggerTask>
{
    CDUnknownBlockType _reply;
}

@property(copy) CDUnknownBlockType reply; // @synthesize reply=_reply;
- (void).cxx_destruct;
- (_Bool)allowLocation;
- (void)triggerQuery:(_Bool)arg1;
- (id)initWithReply:(CDUnknownBlockType)arg1;
- (_Bool)needsBag;

@end

