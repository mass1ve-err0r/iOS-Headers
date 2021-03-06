/* Generated by RuntimeBrowser.
 */

@protocol MOVStreamWriterDelegate <NSObject>

@required

- (void)streamWriterDidFailWithError:(NSError *)arg1;
- (void)streamWriterDidFinishPreparing;
- (void)streamWriterDidFinishRecording;

@optional

- (void)streamWriter:(MOVStreamWriter *)arg1 changedStatusTo:(long long)arg2;
- (void)streamWriter:(MOVStreamWriter *)arg1 inputForStream:(NSString *)arg2 changedIsReadyStatusTo:(bool)arg3;
- (void)streamWriterDidCancelRecording:(MOVStreamWriter *)arg1;
- (void)streamWriterEncounteredAnError:(NSError *)arg1;

@end
