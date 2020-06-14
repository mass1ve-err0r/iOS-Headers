//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SCNMaterialAttachment : NSObject
{
    unsigned int glID;
    unsigned int target;
    void *context;
    struct CGSize size;
    NSDictionary *options;
}

+ (id)materialAttachmentWithGLKTextureInfo:(id)arg1;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic) void *context; // @synthesize context;
@property(nonatomic) unsigned int target; // @synthesize target;
@property(nonatomic) unsigned int glID; // @synthesize glID;
- (void)dealloc;

@end

