%%
function  [Iplot1,NPPBR] = LoadItoPlot(FileName,M,NumAmosCP)
    
    Load_A1 = load(FileName);
    Load_Na = fieldnames(Load_A1);
    for kk=1:length(Load_Na)
        b(kk)=isequal(char(Load_Na(kk)),'NPPBR');
    end
    if ~sum(b)
        NPPBR = 2*NumAmosCP + Load_A1.NPPB;
    else
        NPPBR = Load_A1.NPPBR;
    end
    iaux = Load_A1.EyeToPlot(:,M*NPPBR+1:end-M*NPPBR);
    Iplot1 = reshape(iaux.',1,size(iaux,1)*size(iaux,2));

end