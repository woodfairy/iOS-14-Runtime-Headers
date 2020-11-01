/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVAssetWriterDelegate : NSObject <AVAssetWriterDelegate> {
    struct WeakPtr<WebCore::MediaRecorderPrivateWriter, WTF::EmptyCounter> { 
        struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { 
            struct WeakPtrImpl<WTF::EmptyCounter> {} *m_ptr; 
        } m_impl; 
    }  m_writer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)assetWriter:(id)arg1 didProduceFragmentedHeaderData:(id)arg2;
- (void)assetWriter:(id)arg1 didProduceFragmentedMediaData:(id)arg2 fragmentedMediaDataReport:(id)arg3;
- (void)close;
- (id)initWithWriter:(struct MediaRecorderPrivateWriter { struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x_1_2_1; } x_1_1_1; } x1; struct WeakPtrFactory<WebCore::MediaRecorderPrivateWriter, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> {} *x_1_2_1; } x_2_1_1; } x2; bool x3; bool x4; bool x5; bool x6; bool x7; struct RetainPtr<AVAssetWriter> { void *x_8_1_1; } x8; struct RefPtr<WebCore::SharedBuffer, WTF::DumbPtrTraits<WebCore::SharedBuffer> > { struct SharedBuffer {} *x_9_1_1; } x9; struct CompletionHandler<void (WTF::RefPtr<WebCore::SharedBuffer, WTF::DumbPtrTraits<WebCore::SharedBuffer> > &&)>={Function<void (WTF::RefPtr<WebCore::SharedBuffer, WTF::DumbPtrTraits<WebCore::SharedBuffer> > &&)>={unique_ptr<WTF::Detail::CallableWrapperBase<void, WTF::RefPtr<WebCore::SharedBuffer, WTF::DumbPtrTraits<WebCore::SharedBuffer> > &&>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::RefPtr<WebCore::SharedBuffer, WTF::DumbPtrTraits<WebCore::SharedBuffer> > &&> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void, WTF::RefPtr<WebCore::SharedBuffer, WTF::DumbPtrTraits<WebCore::SharedBuffer> > &&> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WTF::RefPtr<WebCore::SharedBuffer, WTF::DumbPtrTraits<WebCore::SharedBuffer> > &&> > >=^{CallableWrapperBase<void, WTF::RefPtr<WebCore::SharedBuffer, WTF::DumbPtrTraits<WebCore::SharedBuffer> > &&> {} x10; }*)arg1;

@end