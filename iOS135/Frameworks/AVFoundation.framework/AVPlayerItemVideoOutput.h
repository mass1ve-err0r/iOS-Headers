/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput {
    AVPlayerItemVideoOutputInternal * _videoOutputInternal;
}

@property (readonly) <AVPlayerItemOutputPullDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;

- (bool)_attachToPlayerItem:(id)arg1;
- (struct __CVBuffer { }*)_copyPixelBufferForItemTimeWithOptions:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 itemTimeForDisplay:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 options:(unsigned int)arg3;
- (void)_detachFromPlayerItem;
- (void)_dispatchOutputMediaDataWillChange;
- (void)_dispatchOutputSequenceWasFlushed;
- (id)_pixelBufferAttributes;
- (void)_respondToPlayerItemFormatDescriptionsChange;
- (void)_setTagBuffersWithConversionInformation;
- (void)_setTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (void)_startObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (void)_stopObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (struct OpaqueFigVisualContext { }*)_visualContext;
- (long long)clientStateOnRequestedMediaDataChangeNotification;
- (struct __CVBuffer { }*)copyPixelBufferForItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 itemTimeForDisplay:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;
- (struct __CVBuffer { }*)copyPixelBufferForItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 remove:(bool)arg2 itemTimeForDisplay:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })earliestAvailablePixelBufferItemTime;
- (bool)hasNewPixelBufferForItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)init;
- (id)initWithOutputSettings:(id)arg1;
- (id)initWithPixelBufferAttributes:(id)arg1;
- (void)requestNotificationOfMediaDataChangeAsSoonAsPossible;
- (void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setSuppressesPlayerRendering:(bool)arg1;
- (bool)setUpWithOutputSettings:(id)arg1 outputSettingsArePixelBufferAttributes:(bool)arg2 withExceptionReason:(id*)arg3;
- (bool)suppressesPlayerRendering;

@end