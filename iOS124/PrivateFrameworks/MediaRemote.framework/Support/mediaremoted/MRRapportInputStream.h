//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVBufferedInputStream.h>

@class RPCompanionLinkClient, RPCompanionLinkDevice;

@interface MRRapportInputStream : MRAVBufferedInputStream
{
    RPCompanionLinkClient *_client;
    RPCompanionLinkDevice *_device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1;

@end

