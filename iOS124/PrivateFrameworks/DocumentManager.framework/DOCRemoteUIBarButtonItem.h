//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIBarButtonItem.h>

#import <DocumentManager/NSCopying-Protocol.h>

@class NSUUID;

@interface DOCRemoteUIBarButtonItem : UIBarButtonItem <NSCopying>
{
    NSUUID *_uuid;
}

@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

