/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICNotePreviewGenerator : NSObject {
    NSOperationQueue * _operationQueue;
    bool  _suspended;
    NSManagedObjectContext * _workerContext;
}

@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (getter=isSuspended, nonatomic) bool suspended;
@property (nonatomic, retain) NSManagedObjectContext *workerContext;

+ (id)sharedGenerator;

- (void).cxx_destruct;
- (id)drawingAttachmentAtStartOfNote:(id)arg1;
- (void)fetchPreviewImageForNote:(id)arg1 minSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 completionBlock:(id /* block */)arg7;
- (void)fetchPreviewImageForNote:(id)arg1 minSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 cache:(id)arg4 cacheKey:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)fetchPreviewImageForNote:(id)arg1 minSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 completionBlock:(id /* block */)arg4;
- (id)init;
- (bool)isSuspended;
- (id)operationQueue;
- (id)previewImageForNote:(id)arg1 minSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 appearanceInfo:(id)arg4;
- (void)previewImageWithDrawingAttachment:(id)arg1 minSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 completionBlock:(id /* block */)arg7;
- (id)previewURLForNote:(id)arg1;
- (id)renderPreviewImageForNote:(id)arg1 minSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6;
- (void)setOperationQueue:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setWorkerContext:(id)arg1;
- (id)workerContext;

@end