//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKSerializableObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface EKSerializableAttachment : EKSerializableObject
{
    NSURL *_urlOnDisk;
}

+ (id)classesForKey;
@property(retain, nonatomic) NSURL *urlOnDisk; // @synthesize urlOnDisk=_urlOnDisk;
- (void).cxx_destruct;
- (id)createAttachment;
- (id)initWithAttachment:(id)arg1;

@end

